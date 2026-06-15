// fichero 34177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34177;

Registro34177 crear_registro34177(int id) {
    Registro34177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
