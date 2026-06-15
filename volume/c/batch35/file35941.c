// fichero 35941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35941;

Registro35941 crear_registro35941(int id) {
    Registro35941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
