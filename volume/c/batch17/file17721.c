// fichero 17721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17721;

Registro17721 crear_registro17721(int id) {
    Registro17721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
