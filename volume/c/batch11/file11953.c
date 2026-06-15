// fichero 11953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11953;

Registro11953 crear_registro11953(int id) {
    Registro11953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
