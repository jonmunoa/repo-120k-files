// fichero 11321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11321;

Registro11321 crear_registro11321(int id) {
    Registro11321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
