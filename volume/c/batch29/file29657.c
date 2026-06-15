// fichero 29657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29657;

Registro29657 crear_registro29657(int id) {
    Registro29657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
