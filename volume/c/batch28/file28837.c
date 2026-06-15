// fichero 28837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28837;

Registro28837 crear_registro28837(int id) {
    Registro28837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
