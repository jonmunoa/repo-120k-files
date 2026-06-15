// fichero 17753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17753;

Registro17753 crear_registro17753(int id) {
    Registro17753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
