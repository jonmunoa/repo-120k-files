// fichero 34785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34785;

Registro34785 crear_registro34785(int id) {
    Registro34785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
