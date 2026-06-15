// fichero 20001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20001;

Registro20001 crear_registro20001(int id) {
    Registro20001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
