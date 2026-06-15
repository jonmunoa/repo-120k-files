// fichero 8169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8169;

Registro8169 crear_registro8169(int id) {
    Registro8169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
