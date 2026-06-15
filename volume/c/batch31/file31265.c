// fichero 31265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31265;

Registro31265 crear_registro31265(int id) {
    Registro31265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
