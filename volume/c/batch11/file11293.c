// fichero 11293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11293;

Registro11293 crear_registro11293(int id) {
    Registro11293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
