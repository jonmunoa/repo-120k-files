// fichero 29241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29241;

Registro29241 crear_registro29241(int id) {
    Registro29241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
