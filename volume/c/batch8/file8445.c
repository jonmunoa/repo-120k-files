// fichero 8445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8445;

Registro8445 crear_registro8445(int id) {
    Registro8445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
