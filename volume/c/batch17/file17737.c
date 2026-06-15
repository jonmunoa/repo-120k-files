// fichero 17737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17737;

Registro17737 crear_registro17737(int id) {
    Registro17737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
