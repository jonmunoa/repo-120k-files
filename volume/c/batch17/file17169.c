// fichero 17169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17169;

Registro17169 crear_registro17169(int id) {
    Registro17169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
