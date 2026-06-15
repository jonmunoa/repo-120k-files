// fichero 34121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34121;

Registro34121 crear_registro34121(int id) {
    Registro34121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
