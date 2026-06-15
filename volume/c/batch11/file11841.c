// fichero 11841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11841;

Registro11841 crear_registro11841(int id) {
    Registro11841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
