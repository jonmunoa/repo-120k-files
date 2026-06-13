// fichero 21361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21361;

Registro21361 crear_registro21361(int id) {
    Registro21361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21361(Registro21361 r) {
    return r.valor + r.id;
}
