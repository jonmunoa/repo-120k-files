// fichero 8205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8205;

Registro8205 crear_registro8205(int id) {
    Registro8205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
