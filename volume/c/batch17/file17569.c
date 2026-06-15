// fichero 17569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17569;

Registro17569 crear_registro17569(int id) {
    Registro17569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
