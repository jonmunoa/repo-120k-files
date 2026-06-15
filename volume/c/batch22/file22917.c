// fichero 22917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22917;

Registro22917 crear_registro22917(int id) {
    Registro22917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
