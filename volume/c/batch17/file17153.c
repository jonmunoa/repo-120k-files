// fichero 17153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17153;

Registro17153 crear_registro17153(int id) {
    Registro17153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
