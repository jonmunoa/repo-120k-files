// fichero 11513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11513;

Registro11513 crear_registro11513(int id) {
    Registro11513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
