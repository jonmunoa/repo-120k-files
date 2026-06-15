// fichero 19153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19153;

Registro19153 crear_registro19153(int id) {
    Registro19153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
