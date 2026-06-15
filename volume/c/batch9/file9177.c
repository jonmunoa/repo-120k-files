// fichero 9177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9177;

Registro9177 crear_registro9177(int id) {
    Registro9177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
