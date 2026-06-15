// fichero 29697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29697;

Registro29697 crear_registro29697(int id) {
    Registro29697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
