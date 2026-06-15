// fichero 11845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11845;

Registro11845 crear_registro11845(int id) {
    Registro11845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
