// fichero 8077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8077;

Registro8077 crear_registro8077(int id) {
    Registro8077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
