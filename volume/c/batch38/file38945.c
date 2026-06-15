// fichero 38945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38945;

Registro38945 crear_registro38945(int id) {
    Registro38945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
