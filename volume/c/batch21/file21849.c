// fichero 21849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21849;

Registro21849 crear_registro21849(int id) {
    Registro21849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
