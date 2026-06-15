// fichero 34565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34565;

Registro34565 crear_registro34565(int id) {
    Registro34565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
