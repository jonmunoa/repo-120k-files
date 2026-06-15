// fichero 17557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17557;

Registro17557 crear_registro17557(int id) {
    Registro17557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
