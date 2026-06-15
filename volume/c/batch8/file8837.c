// fichero 8837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8837;

Registro8837 crear_registro8837(int id) {
    Registro8837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
