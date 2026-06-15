// fichero 11629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11629;

Registro11629 crear_registro11629(int id) {
    Registro11629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
