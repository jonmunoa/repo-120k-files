// fichero 11817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11817;

Registro11817 crear_registro11817(int id) {
    Registro11817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
