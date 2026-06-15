// fichero 29849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29849;

Registro29849 crear_registro29849(int id) {
    Registro29849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
