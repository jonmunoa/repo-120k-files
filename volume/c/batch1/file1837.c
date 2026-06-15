// fichero 1837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1837;

Registro1837 crear_registro1837(int id) {
    Registro1837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
