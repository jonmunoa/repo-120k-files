// fichero 9497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9497;

Registro9497 crear_registro9497(int id) {
    Registro9497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
