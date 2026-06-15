// fichero 17669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17669;

Registro17669 crear_registro17669(int id) {
    Registro17669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
