// fichero 9005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9005;

Registro9005 crear_registro9005(int id) {
    Registro9005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
