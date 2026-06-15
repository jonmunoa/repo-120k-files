// fichero 11169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11169;

Registro11169 crear_registro11169(int id) {
    Registro11169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
