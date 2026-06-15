// fichero 5781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5781;

Registro5781 crear_registro5781(int id) {
    Registro5781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
