// fichero 11661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11661;

Registro11661 crear_registro11661(int id) {
    Registro11661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
