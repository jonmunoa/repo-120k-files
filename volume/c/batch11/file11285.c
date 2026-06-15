// fichero 11285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11285;

Registro11285 crear_registro11285(int id) {
    Registro11285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
