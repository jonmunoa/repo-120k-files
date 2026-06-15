// fichero 29897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29897;

Registro29897 crear_registro29897(int id) {
    Registro29897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
