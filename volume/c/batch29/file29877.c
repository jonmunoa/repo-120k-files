// fichero 29877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29877;

Registro29877 crear_registro29877(int id) {
    Registro29877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
