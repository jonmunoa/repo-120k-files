// fichero 29425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29425;

Registro29425 crear_registro29425(int id) {
    Registro29425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
