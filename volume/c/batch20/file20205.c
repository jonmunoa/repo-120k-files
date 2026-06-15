// fichero 20205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20205;

Registro20205 crear_registro20205(int id) {
    Registro20205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
