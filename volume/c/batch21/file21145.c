// fichero 21145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21145;

Registro21145 crear_registro21145(int id) {
    Registro21145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
