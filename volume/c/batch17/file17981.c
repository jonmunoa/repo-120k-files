// fichero 17981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17981;

Registro17981 crear_registro17981(int id) {
    Registro17981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
