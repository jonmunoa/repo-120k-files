// fichero 9437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9437;

Registro9437 crear_registro9437(int id) {
    Registro9437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
