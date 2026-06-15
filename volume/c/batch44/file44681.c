// fichero 44681 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44681;

Registro44681 crear_registro44681(int id) {
    Registro44681 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
