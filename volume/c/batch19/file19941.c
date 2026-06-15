// fichero 19941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19941;

Registro19941 crear_registro19941(int id) {
    Registro19941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
