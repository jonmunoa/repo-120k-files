// fichero 21645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21645;

Registro21645 crear_registro21645(int id) {
    Registro21645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
