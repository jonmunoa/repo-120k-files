// fichero 29101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29101;

Registro29101 crear_registro29101(int id) {
    Registro29101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
